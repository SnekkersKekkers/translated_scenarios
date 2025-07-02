BGOpen("tr520",0);
ChLayout(1);
ChSet(7,0,1);
ChMouth(7,3);
ScrFadeIn(0);
VoicePlay("B040724201_07_000");
MsgDisp("Mikage","Let's fully enjoy nature for today!");
MsgSel("｛御影＊＊｝, I'm counting on you♪","Camping means BBQ!","It seems inconvenient and hard...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B040724201_07_010");
    MsgDisp("Mikage","Camping isn't fun if you
leave it to others.
You have to do it together.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040724201_07_020");
    MsgDisp("Mikage","I brought the best meat and vegetables.
Look forward to it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040724201_07_030");
    MsgDisp("Mikage","It's hard to even set up a single tent.
Come on, spread out that waterproof 
tarp over there!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
