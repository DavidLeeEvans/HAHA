package scenes;
/*
import scenes.AnimationScene;
import scenes.BenchmarkScene;
import scenes.BlendModeScene;
import scenes.CustomHitTestScene;
import scenes.FilterScene;
import scenes.MaskScene;
import scenes.MovieScene;
import scenes.RenderTextureScene;
import scenes.Sprite3DScene;
import scenes.TextScene;
import scenes.TextureScene;
import scenes.TouchScene;
*/

// import scenes.SplashScene;
#if demo_video
import scenes.VideoScene;
#end

import starling.core.Starling;
import starling.display.Button;
import starling.display.Image;
import starling.display.Sprite;
import starling.events.TouchEvent;
import starling.events.TouchPhase;
import starling.text.TextField;
import starling.text.TextFieldAutoSize;
import starling.text.TextFormat;
import starling.utils.Align;

import utils.MenuButton;

class MainMenu extends AbstractScene
{
    public function new()
    {
        super();
        init();
    }
    var _buttonCharacterEdit:Button;
    var _buttonExit:Button;
    var _buttonLevelScreen:Button;
    var _buttonLogin:Button;
    var _buttonPlayGame:Button;
    var _buttonSettings:Button;
    private function init():Void
    {
        // create_buttons();
        // var logo:Image = new Image(Game.assets.getTexture("logo"));
        // addChild(logo);
        // var splash:SplashScene = new SplashScene();
        // addChild(splash);
     
        var scenesToCreate:Array<Array<Dynamic>> = [
            ["Character Edit", CharacterEdit],
            ["Level Screen", LevelScreen],
            ["Login Screen", LoginScene],
            ["Play Game", PlayGameScene],
            ["Settings", SettingScene]
        ];
        
        var count:Int = 0;
        
        for (sceneToCreate in scenesToCreate)
        {
            var sceneTitle:String = sceneToCreate[0];
            var sceneClass:Class<Dynamic>  = sceneToCreate[1];
            
            var button:Button = new MenuButton(sceneTitle);
            button.height = 42;
            button.readjustSize();
            button.x = count % 2 == 0 ? 28 : 167;
            button.y = #if demo_video 145 #else 155 #end + Std.int(count / 2) * 46;
            button.name = Type.getClassName(sceneClass);
            addChild(button);
            
            if (scenesToCreate.length % 2 != 0 && count % 2 == 1)
                button.y += 24;
            
            ++count;
        }
        
  
  // show information about rendering method (hardware/software)
        
       // var driverInfo:String = Starling.current.context.driverInfo;
        //trace(driverInfo);
        //var infoText:TextField = new TextField(310, 64, driverInfo);
        //infoText.format.font = "DejaVu Sans";
        //infoText.format.size = 50;
        //infoText.format.verticalAlign = Align.TOP;
        //infoText.x = 50;
        //infoText.y = 175 - infoText.height;
        //infoText.addEventListener(TouchEvent.TOUCH, onInfoTextTouched);
        //addChildAt(infoText, 0);
    }
    
    private function onInfoTextTouched(event:TouchEvent):Void
    {
        if (event.getTouch(this, TouchPhase.ENDED) != null)
            Starling.current.showStats = !Starling.current.showStats;
    }

    private function create_buttons():Void {
        _buttonCharacterEdit = new MenuButton("kjdlkjsdlkjdlkjsd");
        _buttonCharacterEdit.height = 80;
        _buttonCharacterEdit.width = 80;
        _buttonCharacterEdit.readjustSize();
        // button.x = count % 2 == 0 ? 28 : 167;
        // button.y = #if demo_video 145 #else 155 #end + Std.int(count / 2) * 46;
        _buttonCharacterEdit.x = 120;
        _buttonCharacterEdit.y = 120;
        _buttonCharacterEdit.name = Type.getClassName(CharacterEdit);

        trace("-------------------------------------------------------------------------------------------------------------");
        addChild(_buttonCharacterEdit);
        
    }
}