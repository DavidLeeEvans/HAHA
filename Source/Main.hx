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
	var sceneCharacterCustomize = new CharacterCustomizer();
	var sceneCut = new CutScreen();
	var sceneGamePlaying= new GamePlayingScreen();
	var sceneLoading = new LoadingScreen();
	var sceneLogin = new LoginScreen();
	var sceneOption = new OptionScreen();
	var sceneResults = new ResultsScreen();

	public function new() {
		super();
		//		var vampire = new Vampire();
		var fps:FPS = new FPS(10, 100, 0xffffff);
		//
		addChild(fps);
		var fps_mem:FPS_Mem = new FPS_Mem(10, 10, 0xffffff);
		//
		addChild(fps_mem);
		//		addChild(second_main);
	}
}
