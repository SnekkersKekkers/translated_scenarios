BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_B",0.01);
    ChOpen(6,254,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0600000_06_000");
    MsgDisp("Himuro","A splendid victory.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H3A0600000_06_010");
    MsgDisp("Himuro","I couldn't help but admire you.
Congrats on winning.");
    MsgDisp("主人公","(I did it!
I'm really glad I stayed in the
judo club!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_B",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0600000_06_020");
    MsgDisp("Himuro","Strong......");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
You were watching?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H3A0600000_06_030");
    MsgDisp("Himuro","I saw the moment you won.
It was brilliant.");
    MsgDisp("主人公","Thank you!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("H3A0600000_06_040");
    MsgDisp("Himuro","......Maybe I should work out
a little more too.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("H3A0600000_06_050");
    MsgDisp("Himuro","Nothing.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H3A0600000_06_060");
    MsgDisp("Himuro","Anyways, congrats on winning.");
    MsgDisp("主人公","(I did it!
I'm really glad I stayed in the
judo club!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
