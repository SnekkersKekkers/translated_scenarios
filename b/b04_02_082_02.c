BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040208202_02_000");
MsgDisp("Sassa","The fireflies' home, isn't in a pond, but
a spring.");
MsgSel("It's because the spring water is abundant.","Then it's the firefly's spring","It seems like fairies could be there.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208202_02_010");
        MsgDisp("Sassa","You knew that huh?
Seems like it's going to be tough to beat
you in terms of information.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0,1);
        VoicePlay("B040208202_02_020");
        MsgDisp("Sassa","I tried to act like I knew a bit, but I
failed.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208202_02_030");
        MsgDisp("Sassa","You're know this town well right?");
        MsgDisp("主人公","But ｛颯砂＊＊｝ is very knowledgable not
just about track and field but also
exercise and the body too.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208202_02_040");
        MsgDisp("Sassa","That's because since I was little, that's
all I did.
So I became knowledgable.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208202_02_050");
        MsgDisp("Sassa","But with you, it feels like your knowledge
isn't just for yourself.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208202_02_060");
        MsgDisp("Sassa","All the special abilities and knowledge I
have are things I learned for myself.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208202_02_070");
        MsgDisp("Sassa","And I also only use them for myself.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,2,1);
        VoicePlay("B040208202_02_080");
        MsgDisp("Sassa","It's completely different to you, who
teaches it to a lot of people.");
        MsgDisp("主人公","｛颯砂＊＊｝...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040208202_02_090");
        MsgDisp("Sassa","Sorry I said that.
At any rate, I admire you.");
        MsgDisp("主人公","(｛颯砂＊＊｝...I wonder if he's worried
about something.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208202_02_100");
    MsgDisp("Sassa","That's right.
Then, from today onwards, let's call it
the firefly spring.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040208202_02_110");
    MsgDisp("Sassa","Though there's already something that
looks like a fairy in front of me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
