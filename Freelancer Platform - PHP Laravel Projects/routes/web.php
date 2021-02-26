<?php


Route::get('/', function () {
    return view('welcome');
});

Auth::routes();

Route::get('/home', 'HomeController@index')->name('home');
Route::resource('/jobs', 'JobsController');
Route::resource('/profiles', 'ProfileController');
Route::get('/jobsearch', 'JobSearchController@index');
Route::post('/threads/create', 'ThreadController@createThread');
Route::get('/threads/{id}', 'ThreadController@showThread');
Route::post('/threads/{id}/newmessage', 'ThreadController@createMessage');