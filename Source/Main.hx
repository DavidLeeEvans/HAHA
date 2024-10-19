package;

import screens.CharacterCustomizer;
import screens.CutScreen;
import screens.GamePlayingScreen;
import screens.LoginScreen;
import screens.OptionScreen;
import screens.ResultScreen.ResultsScreen;
import debug.FPSMEM.FPS_Mem;

import openfl.display.FPS;
import openfl.display.Sprite;

import screens.LoadingScreen;

class Main extends Sprite {
	var sceneLoading = new LoadingScreen(1,"Loading Screen...");
	var sceneCut = new CutScreen(2,"");
	var sceneOption = new OptionScreen(3,"Option Screen");
	var sceneLogin = new LoginScreen(4,"Login Screen");
	var sceneCharacterCustomize = new CharacterCustomizer(5, "Customize Character");
	var sceneGamePlaying= new GamePlayingScreen(6, "Game");
	var sceneResults = new ResultsScreen(7, "Results");

	public function new() {
		super();
		//		var vampire = new Vampire();
		var fps:FPS = new FPS(10, 100, 0xffffff);
		//
		addChild(fps);
		var fps_mem:FPS_Mem = new FPS_Mem(10, 10, 0xffffff);
		// Loading Screen
		sceneLoading.setTitle("LoadingScreen",0);

		
	}
}
