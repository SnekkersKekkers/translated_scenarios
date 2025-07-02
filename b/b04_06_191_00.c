BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040619100_06_000");
    MsgDisp("Himuro","Yeah, I feel like I learned
something. Being able to experience 
that event vicariously was 
extremely valuable.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040619100_06_010");
    MsgDisp("Himuro","Well... so you prefer it when 
there's more of a story? Next time
I'll take that into consideration.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040619100_06_020");
    MsgDisp("Himuro","It was a miss because
it didn't suit your tastes?
It's not just nonsense,
that makes no sense?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
