
 const videoGrid = document.getElementById('video-grid');

 const socket = io('/'); 

 const peer = new Peer(undefined, {
     path: '/peerjs',
     host: '/',
     port: '443'
 });

let myVideoStream;
let detectVideo;
let detectCanvas;

Promise.all([
  // faceapi.nets.faceRecognitionNet.loadFromUri('/models'),
  // faceapi.nets.faceLandmark68Net.loadFromUri('/models'),
  // faceapi.nets.ssdMobilenetv1.loadFromUri('/models') //heavier/accurate version of tiny face detector
  faceapi.nets.tinyFaceDetector.loadFromUri('/models'),
  faceapi.nets.faceLandmark68Net.loadFromUri('/models'),
  faceapi.nets.faceRecognitionNet.loadFromUri('/models'),
  faceapi.nets.faceExpressionNet.loadFromUri('/models')
]).then(start)


function start() {
  
  const myVideo = document.createElement('video');
  const canvas = document.createElement('canvas');
  detectCanvas = canvas
  myVideo.width = 720;
  myVideo.height = 560;
  myVideo.muted = true;
  detectVideo = myVideo;
  const peers = {}

  navigator.mediaDevices.getUserMedia({
      video: true,
      audio: true
  }).then(stream => {
      myVideoStream = stream;
      addVideoStream(myVideo, stream);

      peer.on('call', call => {
        console.log("user calling");
          call.answer(stream)
          const video = document.createElement('video')
          call.on('stream', userVideoStream => {
              addVideoStream(video, userVideoStream)
          })
      })  
      
      socket.on('user-connected', (userId) => {
      console.log("User Connected " + userId)
      connectToNewUser(userId, stream);
      })
  })

  socket.on('user-disconnected', userId => {
    if (peers[userId]) peers[userId].close()
  })

  peer.on('open', id => {
      socket.emit('join-room', ROOM_ID, id);
  })


  const connectToNewUser = (userId, stream) => {
      const call = peer.call(userId, stream)
      console.log("Called user")
      const video = document.createElement('video')
      call.on('stream', userVideoStream => {
      addVideoStream(video, userVideoStream)
      })
      call.on('close', () => {
        video.remove()
      })
    
      peers[userId] = call
      
  }


  const addVideoStream = (video, stream) => {
      video.srcObject = stream;
      video.addEventListener('loadedmetadata', () => {
          video.play();
      })
      videoGrid.append(video);
  }
    
  recognizeFaces();
}

async function recognizeFaces() {
  detectVideo.addEventListener('play', () => {
    detectCanvas = faceapi.createCanvasFromMedia(detectVideo)
    document.body.append(detectCanvas)
    const displaySize = { width: detectVideo.width, height: detectVideo.height }
    faceapi.matchDimensions(detectCanvas, displaySize)
    setInterval(async () => {
      const detections = await faceapi.detectAllFaces(detectVideo, new faceapi.TinyFaceDetectorOptions()).withFaceLandmarks().withFaceExpressions()
      const resizedDetections = faceapi.resizeResults(detections, displaySize)
      detectCanvas.getContext('2d').clearRect(0, 0, detectCanvas.width, detectCanvas.height)
      faceapi.draw.drawFaceExpressions(detectCanvas, resizedDetections)
    }, 100)
})
  
}



const muteUnmute = () => {
  const enabled = myVideoStream.getAudioTracks()[0].enabled;
  if (enabled) {
    myVideoStream.getAudioTracks()[0].enabled = false;
    setUnmuteButton();
  } else {
    setMuteButton();
    myVideoStream.getAudioTracks()[0].enabled = true;
  }
}

const setMuteButton = () => {
  const html = `
    <i class="fas fa-microphone"></i>
    <span>Mute</span>
  `
  document.querySelector('.main__mute_button').innerHTML = html;
}

const setUnmuteButton = () => {
  const html = `
    <i class="unmute fas fa-microphone-slash"></i>
    <span>Unmute</span>
  `
  document.querySelector('.main__mute_button').innerHTML = html;
}

const playStop = () => {
  let enabled = myVideoStream.getVideoTracks()[0].enabled;
  if (enabled) {
    myVideoStream.getVideoTracks()[0].enabled = false;
    setPlayVideo()
  } else {
    setStopVideo()
    myVideoStream.getVideoTracks()[0].enabled = true;
  }
}

const setStopVideo = () => {
  const html = `
    <i class="fas fa-video"></i>
    <span>Stop Video</span>
  `
  document.querySelector('.main__video_button').innerHTML = html;
}

const setPlayVideo = () => {
  const html = `
  <i class="stop fas fa-video-slash"></i>
    <span>Play Video</span>
  `
  document.querySelector('.main__video_button').innerHTML = html;
}