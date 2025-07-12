switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    VoicePlay("O030601000_06_000");
    MsgDisp("Himuro","You don't have a partner?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Yeah, not yet.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030601000_06_010");
    MsgDisp("Himuro","Ah, I see.
Then it's good timing.
I'll pair with you.");
    MsgDisp("主人公","O-Okay.
Thanks.");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    VoicePlay("O030601000_06_020");
    MsgDisp("Himuro","Are you looking for a partner?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Yeah, I am.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030601000_06_030");
    MsgDisp("Himuro","If you don't pull on my leg,
I can run with you.");
    MsgDisp("主人公","I, I'll do my best.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do
about my partner......)");
    VoicePlay("O030601000_48_000");
    MsgDisp("School Girl A","I wanna run with Himuro-kun～!");
    VoicePlay("O030601000_46_000");
    MsgDisp("School Girl B","But you just
got rejected, right?");
    VoicePlay("O030601000_48_010");
    MsgDisp("School Girl A","Huh～!");
    MsgDisp("主人公","……?");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(6,30,2,0,0,0,#1,0,0);
    VoicePlay("O030601000_06_040");
    MsgDisp("Himuro","Haa...... I finally found you.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030601000_06_050");
    MsgDisp("Himuro","You haven't found a partner
for the three-legged race, have you?");
    MsgDisp("主人公","N, not yet.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030601000_06_060");
    MsgDisp("Himuro","Let's go.");
    MsgDisp("主人公","Huh, are you okay with me?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("O030601000_06_070");
    MsgDisp("Himuro","Don't bother asking.
You already know.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
