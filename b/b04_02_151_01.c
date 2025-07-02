BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
SEPlay("EV_SE_785");
ScrFadeIn(0);
VoicePlay("B040215101_02_000");
MsgDisp("Sassa","Alright!
Did you see that? JUst now∋");
MsgSel("Yeah, that was smooth!","I want you to coach me","Yeah, amazing, the pins looked like 
they were gonna break.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040215101_02_010");
    MsgDisp("Sassa","Yeah, I think I can get a high score!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040215101_02_020");
    MsgDisp("Sassa","Sounds good!
Then, firstly, where do you look
when you're throwing?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040215101_02_030");
    MsgDisp("Sassa","So you were looking that way...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
