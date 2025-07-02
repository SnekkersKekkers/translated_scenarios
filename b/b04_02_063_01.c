BGOpen("wf620",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040206301_02_000");
MsgDisp("Sassa","When you walk slowly, the waves sound
so loud.");
MsgSel("｛颯砂＊＊｝ is always running, huh?","The waves make a \"BANG!\" sound.","It's good to walk slowly.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040206301_02_010");
    MsgDisp("Sassa","Yeah, I guess I'm always just focused
on my breathing and movements and not
much else.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040206301_02_020");
    MsgDisp("Sassa","Hmm it's more of a \"SPLASH!\" kind
of sound, though?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040206301_02_030");
    MsgDisp("Sassa","Yeah, you're right. I guess because I'm 
always worried about my pace that it can 
sometimes be difficult to take it slow.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
