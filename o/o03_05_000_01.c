BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,4,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("O030500001_05_000");
    MsgDisp("Hiiragi","Thank you for your efforts.
We did well in the standings.");
    MsgDisp("主人公","(We were so close to first place......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030500001_05_010");
    MsgDisp("Hiiragi","I thank you.
It was fun to run in sync with you.");
    MsgDisp("主人公","(Yeah......
But we were so close to first place......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,4,2,4,0,#1,0,0);
    ScrFadeIn(0);
    ChEyeOpenLevel(5,9);
    VoicePlay("O030500001_05_020");
    MsgDisp("Hiiragi","I had wanted to hold the first place flag
with you......
My power was not enough.");
    MsgDisp("主人公","Me too, I'm sorry.
I couldn't get in sync......");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("O030500001_05_030");
    MsgDisp("Hiiragi","Not at all.
Falling out of sync and looking at each
other was fun in its own way.");
    MsgDisp("主人公","(Hehe......
But we were so close to first place......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
