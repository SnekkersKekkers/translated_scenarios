BGOpen("tr520",0);
ChLayout(1);
ChSet(7,0,1);
ChMouth(7,3);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B040724202_07_000");
MsgDisp("Mikage","When you go camping together, you can see
a side of the other person that is usually
hidden");
MsgSel("It's perfect for marriage interviews","｛御影＊＊｝'s hidden side?'","It's a little scary...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040724202_07_010");
        MsgDisp("Mikage","Marriage interview camping...
It would kinda be like a marriage crash
course.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040724202_07_020");
        MsgDisp("Mikage","\"Marriage Interview Camping?\"
It might be like a simulation of what it
would be like to live together.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040724202_07_030");
        MsgDisp("Mikage","But what I'm talking about, is more like
seeing the other person's vitality.");
        MsgDisp("主人公","｛御影＊＊｝'s vitality is
so strong, you can see it even on the
regular?'");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        ChEyeOpenLevel(7,7);
        VoicePlay("B040724202_07_040");
        MsgDisp("Mikage","Well, I'm not the type to hold back.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,5);
        ChEyeOpenLevel(7,10);
        VoicePlay("B040724202_07_050");
        MsgDisp("Mikage","Well, it's a camp where you'll notice it
more naturally. It's not just with guys,
too? Then, I'm counting on you?");
        MsgClose();
        SEPlay("EV_SE_626");
        ChClose(7);
        MsgDisp("主人公","(Am I being tested?
Yeah, I'll give it my all!)");
        SEWait();
        MsgClose();
        ScrFadeOut(0);
        BGOpen("tr500",1);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        ChOpen(7,255,0,0,0,#1,#1,0,0);
        ScrFadeIn(0);
        MsgDisp("主人公","...I'm very sorry.
I burnt the camping pot.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040724202_07_060");
        MsgDisp("Mikage","That's right.
But, well, it was delicious?
I had fun.");
        MsgDisp("主人公","Umm...yes.");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,5);
        VoicePlay("B040724202_07_070");
        MsgDisp("Mikage","Then, this \"Marriage Interview Camp\" was a
huge success!");
        MsgDisp("主人公","(Hehe, I had fun.
It would be great if we could come again.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040724202_07_080");
    MsgDisp("Mikage","I've already exposed myself.
I'm out of things to reveal.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040724202_07_090");
    MsgDisp("Mikage","Right. In front of nature, humans are
completely naked. aah, I don't mean that
in a weird way.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
