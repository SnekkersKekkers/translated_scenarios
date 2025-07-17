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
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,4);
    VoicePlay("S120800004_08_000");
    MsgDisp("Shirahane","It's already our senior year shrine visit
huh...");
    MsgDisp("主人公","Yeah...");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("S120800004_08_010");
    MsgDisp("Shirahane","Even though we attended different schools,
it still feels like we've been together
for such a long time.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800004_08_020");
    MsgDisp("Shirahane","Thanks for being nice to me, I guess.
Alright then, see ya");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(The last New Year's of our high school
years, huh...
Let's live without any regrets!)");
    break ;
    case 3:
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,4);
    ChEyeOpenLevel(8,10);
    VoicePlay("S120800004_08_030");
    MsgDisp("Shirahane","It's our last New Year's visit while we're
in high school, but somehow I want
more...");
    MsgDisp("主人公","Eh?");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("S120800004_08_040");
    MsgDisp("Shirahane","It was just a normal shrine visit.
Is it weird to feel this way?");
    MsgDisp("主人公","Hehe!
Talking to ｛大地＊＊｝ is
really fun, so it's okay!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800004_08_050");
    MsgDisp("Shirahane","Right...
Hey, let's talk a bit more.");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,4);
    ChEyeOpenLevel(8,10);
    VoicePlay("S120800004_08_060");
    MsgDisp("Shirahane","We're graduating soon...");
    MsgDisp("主人公","Yeah...");
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("S120800004_08_070");
    MsgDisp("Shirahane","Thank you.");
    MsgDisp("主人公","Huh?");
    VoicePlay("S120800004_08_080");
    MsgDisp("Shirahane","Really...
It's all thanks to you.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S120800004_08_090");
    MsgDisp("Shirahane","Let's go back.
I'll take you home.");
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
