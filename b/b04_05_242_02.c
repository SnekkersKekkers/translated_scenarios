BGOpen("tr520",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040524201_05_000");
MsgDisp("Hiiragi","How about swaying in a hammock?");
MsgSel("Are you already tired?","Like napping in the shade?","I'm afraid of falling off!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040524201_05_010");
        MsgDisp("Hiiragi","No.
I think a hammock in the middle 
of nature will feel good.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        VoicePlay("B040524201_05_020");
        MsgDisp("Hiiragi","No——");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040524201_05_030");
        MsgDisp("Hiiragi","If I am speaking honestly,
I am a bit sleep deprived.");
        MsgDisp("主人公","Eh? Are you alright?");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040524201_05_040");
        MsgDisp("Hiiragi","Yes, it's nothing to worry about.
But, I wanted to be completely honest 
with you. That's how I feel.");
        ChEye(5,2);
        VoicePlay("B040524201_05_050");
        MsgDisp("Hiiragi","Am I troubling you?");
        MsgDisp("主人公","No, you can say anything.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040524201_05_060");
        MsgDisp("Hiiragi","Thank you.
...Then I'll take you up on that offer.
I'll go rent a hammock.");
        MsgDisp("主人公","Hehe, yeah.
Let's take it easy.");
        VoicePlay("B040524201_05_070");
        ChEye(5,3);
        ChMotion(5,0);
        MsgDisp("Hiiragi","Yes, I'll borrow a two-person one.");
        MsgClose();
        SEPlay("EV_SE_626");
        ChClose(5);
        MsgDisp("主人公","Eh...ehhhh∋");
        MsgDisp("主人公","(A two person hammock∋)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(5,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040524201_05_080");
    MsgDisp("Hiiragi","Yes, it's the ultimate luxury.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("B040524201_05_090");
    MsgDisp("Hiiragi","Haha,
is your sleeping posture that bad?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
