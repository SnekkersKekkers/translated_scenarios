BGOpen("wf610",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606202_06_000");
MsgDisp("Himuro","Whenever I come here, it's like
I've been transported to a new world...");
MsgSel("It's one of the wonders of nature","Shouldn't you get used to it soon?","I don't want to go back to the original world");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606202_06_010");
    MsgDisp("Himuro","Yeah, it's totally like that.
To think this is in Habataki City;
I can't believe it.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040606202_06_020");
        MsgDisp("Himuro","It wouldn't hurt for you 
to be a bit more sensitive.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040606202_06_030");
        MsgDisp("Himuro","Aren't you aware that
you're part of the things
I'm not used to yet?");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040606202_06_040");
        MsgDisp("Himuro","When I'm with you, it always feels fresh.
If I'm careless, I won't even get used
to a trip to the convenience store.");
        MsgDisp("主人公","Ehhh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040606202_06_050");
        MsgDisp("Himuro","Well, that parts just a joke.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040606202_06_060");
        MsgDisp("Himuro","...But, 
that's the kind of fresh thrill
I feel, when I'm with you.");
        MsgDisp("主人公","Really...?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040606202_06_070");
        MsgDisp("Himuro","Yeah... my chest 
is kind of itchy and tingly, 
but, it feels somewhat nice.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        VoicePlay("B040606202_06_080");
        MsgDisp("Himuro","I don't want to get 
used to this feeling.");
        MsgDisp("主人公","｛氷室＊＊｝......");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040606202_06_090");
        MsgDisp("Himuro","Well, but...
I'm happy that you said I should 
\"Get used to it soon\", it means being
by your side is only natural. ");
        MsgDisp("主人公","Hehe, yeah!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040606202_06_100");
    MsgDisp("Himuro","I understand that feeling. I want to be
immersed in this world forever. ...If
possible, with you that is.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
