BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    ChOpen(5,254,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0500001_05_000");
    MsgDisp("Hiiragi","......Good work.");
    MsgDisp("主人公","｛柊＊＊＊｝......
I lost.");
    ChEye(5,4);
    VoicePlay("H3A0500001_05_010");
    MsgDisp("Hiiragi","But you didn't give up until
the very end.
You have touched my heart.");
    VoicePlay("H3A0500001_05_020");
    MsgDisp("Hiiragi","Naturally, my heart was moved.
Thank you.");
    MsgDisp("主人公","That's......");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("H3A0500001_05_030");
    MsgDisp("Hiiragi","It's the same for everyone in the
audience. So face foward and puff your
chest out with confidence.");
    MsgDisp("主人公","Yes.");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("H3A0500001_05_040");
    MsgDisp("Hiiragi","Yes, that's your beautiful face.");
    MsgDisp("主人公","(Thank you, ｛柊＊＊＊｝......
I didn't win, but I'm glad I stayed
in the judo club......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
BGMStop();
