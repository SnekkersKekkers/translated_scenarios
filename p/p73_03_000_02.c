BGMStop();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing traditional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,5,3,3,#1,#1,0,0);
    VoicePlay("P730300002_03_000");
    MsgDisp("Honda","Waa...!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Did you come to watch?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P730300002_03_010");
    MsgDisp("Honda","Yeah.
After all, I heard you were displaying
wedding dresses this year.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("P730300002_03_020");
    MsgDisp("Honda","This is my first time seeing a bride this
up close.");
    MsgDisp("主人公","Ummm...
I'm not a bride though?");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("P730300002_03_030");
    MsgDisp("Honda","Ahー, I see!
Sorry.
You look too real.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("P730300002_03_040");
    MsgDisp("Honda","Ah, it's already your turn.
... Hey.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P730300002_03_050");
    MsgDisp("Honda","Sending you off like this makes me feel
like I'm your father");
    MsgDisp("主人公","(Hehe!
This is my last show, I have to finish off
these last three years well!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This year we're showing traditional
wedding dresses. I think I was able to
make it pretty but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,4,1,4,0,#1,0,0);
    VoicePlay("P730300002_03_060");
    MsgDisp("Honda","U-Um...");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Did you come to cheer me on?");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("P730300002_03_070");
    MsgDisp("Honda","Yeah, I planned on doing that but...
I feel gloomy.");
    MsgDisp("主人公","Eh?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("P730300002_03_080");
    MsgDisp("Honda","You wearing a wedding dress, is so
beautiful, and it suits you well, I want
to keep it to myself.");
    MsgDisp("主人公","Ehhhh∋");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P730300002_03_090");
    MsgDisp("Honda","Hey, in the movies sometimes, brides get
taken away, right?
Can I do that too?");
    MsgDisp("主人公","Ehhh∋");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("P730300002_03_100");
    MsgDisp("Honda","I'm joking...
But, you don't have to draw that much
attention to yourself....");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's time...");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("P730300002_03_110");
    MsgDisp("Honda","Bzzt.
I feel like this is the wrong answer.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P730300002_03_120");
    MsgDisp("Honda","Relax.
I won't take you away.
Go walk your head held high, as you are.");
    MsgDisp("主人公","(Hehe!
This is my last show, I have to finish off
these last three years well!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(3,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
