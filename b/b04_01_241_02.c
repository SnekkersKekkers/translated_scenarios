BGOpen("tr510",0);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040124102_01_000");
MsgDisp("Kazama","There's always a nice breexe blowing here.");
MsgSel("I'm sure it feels nice for the animals too","*Sniff, sniff*, I smell something...","The windmills are spinning too");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040124102_01_010");
    MsgDisp("Kazama","Yeah, they're always sleeping 
peacefully after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040124102_01_020");
    MsgDisp("Kazama","If you know, 
don't smell it on purpose.
You really are a funny one.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040124102_01_030");
        MsgDisp("Kazama","You can see that windmill even without
coming all the way here, right?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,1);
        VoicePlay("B040124102_01_040");
        MsgDisp("Kazama","That's right,
it's spinning well.");
        MsgDisp("主人公","It's like a massive pinwheel.");
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        Wait(12,0);
        ChEye(1,4);
        ChMouth(1,3);
        VoicePlay("B040124102_01_050");
        MsgDisp("Kazama","Heehー, what a coincidence.
I thought that too.");
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040124102_01_060");
        MsgDisp("Kazama","If we stayed here, the
sunset might dye it orange.");
        MsgDisp("主人公","Hehe.
Such a big pinwheel could probaly
grant a lot of wishes, right?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040124102_01_070");
        MsgDisp("Kazama","...Geez, don't be son greedy.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040124102_01_080");
        MsgDisp("Kazama","Just one wish is enough for me.");
        MsgDisp("主人公","Yeah, me too.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,5);
        VoicePlay("B040124102_01_090");
        MsgDisp("Kazama","Really?
Well, that's good then.");
        MsgDisp("主人公","(I'd like to hear
｛風真＊＊｝'s wish one day.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
