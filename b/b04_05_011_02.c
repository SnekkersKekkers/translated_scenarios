BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040501102_05_000");
MsgDisp("Hiiragi","Shall we sit on that chair?");
MsgSel("The floor is glass?","Yeah, it's a bit scary though...","Shall we linger until sunset?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040501102_05_010");
    MsgDisp("Hiiragi","Yes, I'll sit on that.
That's the idea.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040501102_05_020");
        MsgDisp("Hiiragi","If it scares you, I'll drop the matter.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,2);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040501102_05_030");
        MsgDisp("Hiiragi","Sorry.
That was deliberately mean.");
        MsgDisp("主人公","Eh?");
        ChMotion(5,0);
        ChEyeOpenLevel(5,9);
        VoicePlay("B040501102_05_040");
        MsgDisp("Hiiragi","I had predicted you would be scared, but I
asked anyways.");
        ChMotion(5,1);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040501102_05_050");
        MsgDisp("Hiiragi","You're kind, in comparison I am dishonest.");
        MsgDisp("主人公","Eh, that's not true?");
        ChMouth(5,4);
        ChMotion(5,2);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040501102_05_060");
        MsgDisp("Hiiragi","I wonder why?
I seem to become childish when I am in
front of you.");
        VoicePlay("B040501102_05_070");
        MsgDisp("Hiiragi","What is it about you that causes this...
I am surprised that such feelings
themselves remain within me.");
        MsgDisp("主人公","｛柊＊＊＊｝, I would be happy if you were
to talk to me about whatever was on your
mind.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,3);
        VoicePlay("B040501102_05_080");
        MsgDisp("Hiiragi","Thank you.
Then, taking you upon your offer...
Can we walk around once holding hands?");
        MsgDisp("主人公","Yes, of course.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(5,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(5,255,0,4,4,#1,#1,7,0,0,30);
        VoicePlay("B040501102_05_090");
        MsgDisp("Hiiragi","Thank you.");
        ChMotion(5,4);
        VoicePlay("B040501102_05_100");
        MsgDisp("Hiiragi","Unlike the lines on stage, in real life,
only simple words come out.");
        MsgDisp("主人公","(｛柊＊＊＊｝, are you relying on me?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040501102_05_110");
    MsgDisp("Hiiragi","Though, I'm slightly conscious of the
store clerk watching us.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
