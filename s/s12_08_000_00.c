MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("S120800000_08_000");
    MsgDisp("Shirahane","I guess it's around that time.");
    MsgDisp("主人公","Yeah.
Thanks for coming with me today.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800000_08_010");
    MsgDisp("Shirahane","Same here.
See you later!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(I wonder how the year will go?)");
    break ;
    case 3:
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S120800000_08_020");
    MsgDisp("Shirahane","Ha...
I knew it.");
    MsgDisp("主人公","That Amazake was delicious!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800000_08_030");
    MsgDisp("Shirahane","Right?
It makes you feel all warm and fuzzy
inside.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    case 4:
    case 5:
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S120800000_08_040");
    MsgDisp("Shirahane","Haha...
What a good start to the year.");
    MsgDisp("主人公","Yeah!
It was fun!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800000_08_050");
    MsgDisp("Shirahane","Haha.
If you're happy, then I'm happy too.");
    MsgDisp("主人公","Hehe.");
    ChMotion(8,0,1);
    VoicePlay("S120800000_08_060");
    MsgDisp("Shirahane","Well I'm in a good mood so, let me walk
you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
SEWait();
