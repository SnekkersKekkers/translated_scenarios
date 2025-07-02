BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,2,2,2,0,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200002_02_000");
    MsgDisp("Sassa","Haa...... Sorry.
I have to match your pace......");
    MsgDisp("主人公","(Ugh,
I should've tried harder......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,4,2,2,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200002_02_010");
    MsgDisp("Sassa","Sorry, you're not hurt, are you?");
    MsgDisp("主人公","No, I'm fine.");
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("O030200002_02_020");
    MsgDisp("Sassa","I rushed too much.
I went faster than I should've.");
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("O030200002_02_030");
    MsgDisp("Sassa","But, last, huh......");
    MsgDisp("主人公","(Ugh,
I should've tried harder......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200002_02_040");
    MsgDisp("Sassa","Last!?");
    MsgDisp("主人公","Sorry for pulling on your leg......");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("O030200002_02_050");
    MsgDisp("Sassa","Ahaha......
This might be the first time
I've placed last in athletics.");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("O030200002_02_060");
    MsgDisp("Sassa","And in the competition with you?
I'm sorry, I was rushing.
I wanted to win for you......");
    MsgDisp("主人公","(Ugh,
I should've tried harder......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
