<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;
use App\Profile;
use App\User;
use \Auth;

class ProfileController extends Controller{
    /**
     * Display a listing of the resource.
     ** @param  int  $id
     * @return \Illuminate\Http\Response
     */
    public function index()
    {
        $id = Auth::user()->id;
        $profiles = Profile::where('user_id',$id)->get();
        
        return view('profiles.index', ['profiles' => $profiles]);
    }

    /**
     * Show the form for creating a new resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function create()
    {
        return view('profiles.create');
    }

    /**
     * Store a newly created resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @return \Illuminate\Http\Response
     */
    public function store(Request $request)
    {
        $this->validate($request, [
           'skill' => 'required|string',
           'bio' => 'required|string',
           'experience' => 'required|string',
        ]);
        
        $Profile = new Profile;
        
        $Profile->skill = $request->input('skill');
        $Profile->experience = $request->input('experience');
        $Profile->bio = $request->input('bio');
        
        $User = Auth::user();
        
        $User->profiles()->save($Profile);
        
        return redirect('/profiles')->with('success', 'The Profiles was Updated!');
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param  int  $id
     * @return \Illuminate\Http\Response
     */
    public function edit($id)
    {
       $Profile = Profile::find($id);
       
       return view('profiles.edit')->with('Profile', $Profile);
    }

    /**
     * Update the specified resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  int  $id
     * @return \Illuminate\Http\Response
     */
    public function update(Request $request, $id)
    {
    	$this->validate($request, [
           'skill' => 'required|string',
           'bio' => 'required|string',
           'experience' => 'required|string',
        ]);
        
        $Profile = Profile::find($id);
        
        $Profile->skill = $request->input('skill');
        $Profile->experience = $request->input('experience');
        $Profile->bio = $request->input('bio');
        
        $User = Auth::user();
        
        $User->profiles()->save($Profile);
        
        return redirect('/profiles')->with('success', 'The Profiles was Updated!');

    }

}