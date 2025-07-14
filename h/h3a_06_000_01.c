BGOpen("sc623",0);
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0600001_06_000");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","｛氷室＊＊｝......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H3A0600001_06_010");
    MsgDisp("Himuro","There's no helping it.
It just means your opponent was trying
harder than you.");
    MsgDisp("主人公","Yeah......");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H3A0600001_06_020");
    MsgDisp("Himuro","But if you ask me, it's amazing enough
just to make it here, you know?
I think you should be more proud.");
    MsgDisp("主人公","(That's true......
I lost, but I'm glad I stayed in the judo
club......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0600001_06_030");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","｛氷室＊＊｝......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("H3A0600001_06_040");
    MsgDisp("Himuro","......Sorry. I honestly don't know what
else to say. Because I know just how hard
you worked.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H3A0600001_06_050");
    MsgDisp("Himuro","I just don't think you should make that
face. It's an honor just to make it on
that stage.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H3A0600001_06_060");
    MsgDisp("Himuro","Your serious expression too, it was pretty
cool......");
    MsgDisp("主人公","Hehe, thanks.");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("H3A0600001_06_070");
    MsgDisp("Himuro","......Yeah.
Rest up for today.");
    MsgDisp("主人公","(I lost, but I'm glad I stayed in the judo
club.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
BGMStop();
