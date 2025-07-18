BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040621102_06_000");
MsgDisp("Himuro","There are a lot of families here huh...");
MsgSel("There are a lot of couples too?","Shall we pretend to be a family too?","The kids are cute huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621102_06_010");
    MsgDisp("Himuro","Well, that's right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040621102_06_020");
        MsgDisp("Himuro","Why?
Is there a need to?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040621102_06_030");
        MsgDisp("Himuro","Pretend to be a family...what's with
that?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040621102_06_040");
        MsgDisp("Himuro","Don't tell me I'm your husband?");
        MsgDisp("主人公","Eh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040621102_06_050");
        MsgDisp("Himuro","What's with that reaction.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040621102_06_060");
        MsgDisp("Himuro","Then what?
Am I your Father?");
        MsgDisp("主人公","That's still...
I thought we were brother and sister.");
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        ChCheek(6,0);
        VoicePlay("B040621102_06_070");
        MsgDisp("Himuro","Haa...I see. At any rate, I'm the younger
brother right?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040621102_06_080");
        MsgDisp("Himuro","Alright, that setup is fine.
Come on, let's go then big sister.");
        MsgDisp("主人公","Y-Yeah.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(6,0,30);
        MsgClose();
        ChLayout(0);
        ChOpen(6,253,4,0,0,#1,#1,0,0);
        VoicePlay("B040621102_06_090");
        MsgDisp("Himuro","Is something wrong?");
        MsgDisp("主人公","Waa!
Y-You're so close, ｛氷室＊＊｝!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040621102_06_100");
        MsgDisp("Himuro","Really?
That's only normal.
We're siblings after all.");
        MsgDisp("主人公","(Is ｛氷室＊＊｝ angry...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040621102_06_110");
    MsgDisp("Himuro","Hmm, is this what they mean by maternal
instincts? To be able to unconditionally
think a kid is adorable...it's amazing.
No, I mean it in a good way.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
