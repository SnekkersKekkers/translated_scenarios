BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040609000_06_000");
MsgDisp("Himuro","It might be fitting to say it's a sea of
green.");
MsgSel("That flower is producing a super nice fragrance...","It sure is humid isn't it?","I wonder where the carnivorous plants are?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040609000_06_010");
    MsgDisp("Himuro","Which one... Ah, it really is.
Not too sweet, there's a 
refreshing feeling to it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040609000_06_020");
    MsgDisp("Himuro","Do you dislike it?
If that's the case, why not just stop 
coming to the botanical garden? ");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040609000_06_030");
    MsgDisp("Himuro","...That's kind of hardcore.
I never thought you'd be into
that sorta thing. Alright, let's see
the carnivorous plants first.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
