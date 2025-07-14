BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY",0.01);
MsgClose();
ChOpen(3,30,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("O020300000_03_000");
    MsgDisp("Honda","Good work!
It was worth watching until the end.
My hands were sweating.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoiceEVSPlay(3);
    VoicePlay("O020300000_03_010");
    MsgDisp("Honda","｛主人公｝, Congrats!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝. You were watching?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O020300000_03_020");
    MsgDisp("Honda","Of course!
It was a really good match that proved
that tug of war isn't just about strength.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoiceEVSPlay(3);
    VoicePlay("O020300000_03_030");
    MsgDisp("Honda","｛主人公｝, good work!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝! I did it!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("O020300000_03_040");
    MsgDisp("Honda","Yeah, everyone around you was breathing
perfectly in time with your shouts!
As expected of you!");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
