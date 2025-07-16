BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040608502_06_000");
MsgDisp("Himuro","The tip of your nose is getting red.");
MsgSel("How embarrassing...","So is yours, ｛氷室＊＊｝.","You shouldn't point it out though...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608502_06_010");
    MsgDisp("Himuro","It's not something to be concerned about
though?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ChCheek(6,10);
    VoicePlay("B040608502_06_020");
    MsgDisp("Himuro","It's cold.
This is normal.
... We're matching.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040608502_06_030");
        MsgDisp("Himuro","Was that insensitive of me?
I'm sorry.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040608502_06_040");
        MsgDisp("Himuro","I can't just disregard it.
I'll always be worried about you no matter
what.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608502_06_050");
        MsgDisp("Himuro","I mean, are you alright?
You won't catch a cold right?");
        MsgDisp("主人公","I'm alright.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608502_06_060");
        MsgDisp("Himuro","Don't overestimate yourself. If your
health deteriorates, everyone around you
will worry. Don't forget.");
        MsgDisp("主人公","Yeah.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040608502_06_070");
        MsgDisp("Himuro","...Of course, that goes for me too.");
        MsgDisp("主人公","Thank you.");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,1);
        VoicePlay("B040608502_06_080");
        MsgDisp("Himuro","... Ha?
What was the point of saying thanks just
now?");
        MsgDisp("主人公","Ehhh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040608502_06_090");
        MsgDisp("Himuro","I would be happier if you were healthy,
than if you were to thank me for being
worried.");
        MsgDisp("主人公","Yeah... um, well, thanks after all.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608502_06_100");
        MsgDisp("Himuro","...Yeah.");
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
