package gasm.examples.openfl.bunnymark;

import openfl.display3D.Context3DRenderMode;
import openfl.system.Capabilities;
import openfl.display.StageScaleMode;

import openfl.Assets;
import openfl.display.Bitmap;
import gasm.openfl.OFLContext;

import haxe.Timer;

import starling.core.Starling;
import starling.events.Event;
import starling.assets.AssetManager;
import starling.utils.Max;

import utils.ProgressBar;

class Test extends OFLContext
{
    private var _starling:Starling;
    private var _background:Bitmap;
    private var _progressBar:ProgressBar;
    private var _assets:AssetManager;

    public function new()
    {
        super();
        if (stage != null) start();
        else addEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
    }

    private override function onAddedToStage(event:Dynamic):Void
    {
        removeEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
        
        stage.scaleMode = StageScaleMode.NO_SCALE;
        
        start();
    }

    private function start():Void
    {
        // We develop the game in a *fixed* coordinate system of 320x480. The game might
        // then run on a device with a different resolution; for that case, we zoom the
        // viewPort to the optimal size for any display and load the optimal textures.

        Starling.multitouchEnabled = true; // for Multitouch Scene

        _starling = new Starling(Game, stage, null, null, Context3DRenderMode.AUTO, "auto");
        _starling.stage.stageWidth = Constants.GameWidth;
        _starling.stage.stageHeight = Constants.GameHeight;
        _starling.enableErrorChecking = Capabilities.isDebugger;
        _starling.skipUnchangedFrames = true;
        _starling.supportBrowserZoom = true;
        _starling.supportHighResolutions = true;
        _starling.simulateMultitouch = true;
        _starling.addEventListener(Event.ROOT_CREATED, function():Void
        {
            loadAssets(startGame);
        });
        
        this.stage.addEventListener(Event.RESIZE, onResize, false, Max.INT_MAX_VALUE, true);

        _starling.start();
        initElements();
    }

    private function loadAssets(onComplete:Void->Void):Void
    {
        _assets = new AssetManager();

        _assets.verbose = Capabilities.isDebugger;
        _assets.enqueue([
            Assets.getPath ("assets/textures/1x/background.jpg"),
            Assets.getPath ("assets/textures/1x/atlas.png"),
            Assets.getPath ("assets/textures/1x/atlas.xml"),
            Assets.getPath ("assets/textures/1x/compressed_texture.atf"),
            Assets.getPath ("assets/fonts/1x/desyrel.png"),
            Assets.getPath ("assets/fonts/1x/desyrel.fnt"),
            //TODO dle add other assets 

            // angel
            Assets.getPath ("angel/character-ess.png"),
            Assets.getPath ("angel/character-ess.atlas"),
            Assets.getPath ("angel/character-ess.spine"),
            Assets.getPath ("angel/character-ess.spinejson"),

            // demon01
            Assets.getPath ("demon01/character-ess.png"),
            Assets.getPath ("demon01/character-ess.atlas"),
            Assets.getPath ("demon01/character-ess.spine"),
            Assets.getPath ("demon01/character-ess.spinejson"),

            // demon02
            Assets.getPath ("demon02/character-ess.png"),
            Assets.getPath ("demon02/character-ess.atlas"),
            Assets.getPath ("demon02/character-ess.spine"),
            Assets.getPath ("demon02/character-ess.spinejson"),

            // demon03
            Assets.getPath ("demon03/character-ess.png"),
            Assets.getPath ("demon03/character-ess.atlas"),
            Assets.getPath ("demon03/character-ess.spine"),
            Assets.getPath ("demon03/character-ess.spinejson"),

            // demon04
            Assets.getPath ("demon04/character-ess.png"),
            Assets.getPath ("demon04/character-ess.atlas"),
            Assets.getPath ("demon04/character-ess.spine"),
            Assets.getPath ("demon04/character-ess.spinejson"),


            // seraphim01
            Assets.getPath ("seraphim01/character-ess.png"),
            Assets.getPath ("seraphim01/character-ess.atlas"),
            Assets.getPath ("seraphim01/character-ess.spine"),
            Assets.getPath ("seraphim01/character-ess.spinejson"),

            // seraphim02
            Assets.getPath ("seraphim02/character-ess.png"),
            Assets.getPath ("seraphim02/character-ess.atlas"),
            Assets.getPath ("seraphim02/character-ess.spine"),
            Assets.getPath ("seraphim02/character-ess.spinejson"),

            // seraphim03
            Assets.getPath ("seraphim03/character-ess.png"),
            Assets.getPath ("seraphim03/character-ess.atlas"),
            Assets.getPath ("seraphim03/character-ess.spine"),
            Assets.getPath ("seraphim03/character-ess.spinejson"),

            // seraphim04
            Assets.getPath ("seraphim04/character-ess.png"),
            Assets.getPath ("seraphim04/character-ess.atlas"),
            Assets.getPath ("seraphim04/character-ess.spine"),
            Assets.getPath ("seraphim04/character-ess.spinejson"),

            // trap01
            Assets.getPath ("trap01/trap-ess.png"),
            Assets.getPath ("trap01/trap-ess.atlas"),
            Assets.getPath ("trap01/trap-ess.spinejson"),
            // trap02
            Assets.getPath ("trap02/trap-ess.png"),
            Assets.getPath ("trap02/trap-ess.atlas"),
            Assets.getPath ("trap02/trap-ess.spinejson"),
           // trap03
            Assets.getPath ("trap03/trap-ess.png"),
            Assets.getPath ("trap03/trap-ess.atlas"),
            Assets.getPath ("trap03/trap-ess.spinejson"),
           // trap04
           Assets.getPath ("trap04/trap-ess.png"),
           Assets.getPath ("trap04/trap-ess.atlas"),
           Assets.getPath ("trap04/trap-ess.spinejson"),
           // trap05
           Assets.getPath ("trap05/trap-ess.png"),
           Assets.getPath ("trap05/trap-ess.atlas"),
           Assets.getPath ("trap05/trap-ess.spinejson"),
          // trap06
           Assets.getPath ("trap06/trap-ess.png"),
           Assets.getPath ("trap06/trap-ess.atlas"),
           Assets.getPath ("trap06/trap-ess.spinejson"),
    
            // vampire
            Assets.getPath ("vampire/character-ess.png"),
            Assets.getPath ("vampire/character-ess.atlas"),
            Assets.getPath ("vampire/character-ess.spine"),
            Assets.getPath ("vampire/character-ess.spinejson"),


            #if flash
            Assets.getPath ("assets/audio/wing_flap.mp3")
            #else
            Assets.getPath ("assets/audio/wing_flap.ogg")
            #end
        ]);
        _assets.loadQueue(onComplete);

    }

    private function startGame():Void
    {
       var game:Game = cast(_starling.root, Game);
       game.start(_assets);
       Timer.delay(removeElements, 150); // delay to make 100% sure there's no flickering.
    }

    private function initElements():Void
    {
        // Add background image.

        _background = new Bitmap();
        Assets.loadBitmapData("assets/textures/1x/background.jpg").onComplete (function (bitmapData) {
            _background.bitmapData = bitmapData;
        });
        _background.smoothing = true;
        addChild(_background);

        // While the assets are loaded, we will display a progress bar.

        _progressBar = new ProgressBar(175, 20);
        _progressBar.x = (_background.width - _progressBar.width) / 2;
        _progressBar.y =  _background.height * 0.7;
        // _progressBar.ratio = .0001;
        addChild(_progressBar);
    }

    private function removeElements():Void
    {
        if (_background != null)
        {
            removeChild(_background);
            _background = null;
        }

        if (_progressBar != null)
        {
            removeChild(_progressBar);
            _progressBar = null;
        }
    }
    
    // private override function onResize(e:openfl.events.Event):Void
    // {
        // var viewPort:Rectangle = RectangleUtil.fit(new Rectangle(0, 0, Constants.GameWidth, Constants.GameHeight), new Rectangle(0, 0, stage.stageWidth, stage.stageHeight));
        // try
        // {
            // this._starling.viewPort = viewPort;
        // }
        // catch(error:Error) {}
    // }
}