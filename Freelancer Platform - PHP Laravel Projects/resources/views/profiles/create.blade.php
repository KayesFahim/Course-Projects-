@extends('layouts.app')

@section('content')
<div class="container">
    <div class="row justify-content-center">
        <div class="col-md-8">
            <div class="card">
                <div class="card-header"><h2>{{ __('Profile') }}</h2></div>

                <div class="card-body">
				{{Form::open(['action' => 'ProfileController@store'])}}
	
					<div class="form-group">
							{{Form::label('skill','Job Skills')}}
							{{Form::text('skill','', ['class' => 'form-control', 'placeholder' => 'Skills'])}}
					</div>
				
					<div class="form-group">
							{{Form::label('','Experinece')}}
							{{Form::text('experience','', ['class' => 'form-control', 'placeholder' => 'Experience'])}}
					</div>
		
				<div class="form-group">
							{{Form::label('bio','Short Bio')}}
							{{Form::textArea('bio','', ['class' => 'form-control', 'placeholder' => 'Short Bio'])}}
				</div>
				    	{{Form::submit('Complete Profile', ['class' => 'btn btn-primary'])}}
						{{Form::close()}}
                
                </div>
            </div>
        </div>
    </div>
</div>
@endsection
