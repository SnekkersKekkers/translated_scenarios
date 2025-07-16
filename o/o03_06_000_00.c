BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600000_06_000");
    MsgDisp("Himuro","We did good.
I'm glad my leg wasn't pulled too much.");
    MsgDisp("主人公","(We did it!
I'm glad I did my best!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600000_06_010");
    MsgDisp("Himuro","We went pretty fast.
I was kinda surprised.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("O030600000_06_020");
    MsgDisp("Himuro","I didn't expect it, but maybe we're a
little compatible.");
    MsgDisp("主人公","(Yay!
I got first place with ｛氷室＊＊｝!
)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600000_06_030");
    MsgDisp("Himuro","Alright, first......!");
    MsgDisp("主人公","We did it, ｛氷室＊＊｝!");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("O030600000_06_040");
    MsgDisp("Himuro","Yeah.
I didn't think that we would be this in
sync.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("O030600000_06_050");
    MsgDisp("Himuro","A happy miscalculation.
I'm glad I worked with you.");
    MsgDisp("主人公","(First place, huh.
I'm glad I worked hard with
｛氷室＊＊｝! )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
