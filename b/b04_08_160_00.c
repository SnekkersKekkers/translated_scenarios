BGOpen("ne330",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040816000_08_000");
MsgDisp("Shirahane","So, why not play?");
MsgSel("I want to take on the medal game!","Shall we take on the quiz game?","Shall we try getting our compatibility read?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(8,0,1);
    VoicePlay("B040816000_08_010");
    MsgDisp("Shirahane","Sounds good.
Let's get lotsa medals.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040816000_08_020");
    MsgDisp("Shirahane","Sounds good-? It's time fer me to show you
my true worth...I won't go easy on ya, are
ya ready?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,2,1);
    ChCheek(8,5);
    VoicePlay("B040816000_08_030");
    MsgDisp("Shirahane","Eh...you'll get it read with me?
Are you anticipating it...?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
