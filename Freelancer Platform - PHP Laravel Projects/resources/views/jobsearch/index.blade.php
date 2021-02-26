@extends('layouts.app')

@section('content')
<div class="container">
    <div class="row justify-content-center">
        <div class="col-md-8">
            <div class="card">
                <div class="card-header"><center><h2>{{ __('Available Job') }}</center></h2>
                <form class="form-inline md-form mr-auto mb-4">
                 <input class="form-control mr-sm-2" type="text" placeholder="Search" aria-label="Search">
                 <button class="btn btn-primary" type="submit">Search</button>
                </form>
</diV>
                <div class="card-body">
				<hr>
	
				@if(count($Jobs) > 0)
	
					@foreach($Jobs as $Job)

					<a href="/jobs/{{$Job->id}}"><h4>{{$Job->title}}</h4></a>
                    <p>Company name; {{$Job->name}}</p>
					<p>Budget: $ {{$Job->budget}}
			
					<hr>
				@endforeach
	
	@endif
                
                </div>
            </div>
        </div>
    </div>
</div>
@endsection
