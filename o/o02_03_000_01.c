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
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O020300001_03_000");
    MsgDisp("Honda","Hm......
The other team was really in sync.
Did the all practice together?");
    MsgDisp("主人公","(I lost......
I wish I tried harder.)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("O020300001_03_010");
    MsgDisp("Honda","It looked like either team
could've won today's match.
......Until halfway through.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O020300001_03_020");
    MsgDisp("Honda","In the last few seconds, I guess
the other team persisted a little more?
Hm, that was close.");
    MsgDisp("主人公","(I lost......
I wish I tried harder.)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0);
    VoiceEVSPlay(3);
    VoicePlay("O020300001_03_030");
    MsgDisp("Honda","｛主人公｝.");
    MsgDisp("主人公","Hm, ｛本多＊＊｝?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("O020300001_03_040");
    MsgDisp("Honda","Ah, good.
You seem okay.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("O020300001_03_050");
    MsgDisp("Honda","You might've lost, but in the end,
whoever moves their body more and has
more fun is the winner! Like you, right?");
    MsgDisp("主人公","Hehe, maybe?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O020300001_03_060");
    MsgDisp("Honda","Yeah yeah, that expression!
The sports festival is still going on,
so let's have fun!");
    MsgDisp("主人公","(｛本多＊＊｝, thank you.
I lost, but I'll still enjoy
the rest of the festival.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
