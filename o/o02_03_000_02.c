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
    ChMotion(3,5);
    VoicePlay("O020300002_03_000");
    MsgDisp("Honda","Huh, it ended!?
Since we're already here, we should've
seen it through.");
    MsgDisp("主人公","(A draw, huh......
We were so close......)");
    break ;
    case 3:
    ChEye(3,1);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("O020300002_03_010");
    MsgDisp("Honda","Da, how close!
Nice fight!");
    MsgDisp("主人公","(A draw, huh......
We were so close......)");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("O020300002_03_020");
    MsgDisp("Honda","That was a close match.
You didn't scrape
or hurt your hand, right?");
    MsgDisp("主人公","Ah, yeah......
Sorry, even though you came
to cheer me on.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O020300002_03_030");
    MsgDisp("Honda","Why are you apologizing?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O020300002_03_040");
    MsgDisp("Honda","I'm just glad I got to spend all
this time seeing you doing your best.");
    MsgDisp("主人公","(Ugh, how embarrassing......
But, I wanted to show you a win,
rather than a draw.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
