BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,2,2,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040423101_04_000");
MsgDisp("Nanatsumori","Haa...
Are you the type who doesn't
mind your hair getting messy");
MsgSel("Maybe my hair is weird∋","Eh, you're worried about that kinda thing?","It's just naturally messy♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423101_04_010");
    MsgDisp("Nanatsumori","Eh, you mean you didn't notice
at all? Maybe I should've 
stayed quiet.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040423101_04_020");
    MsgDisp("Nanatsumori","Sorry, I'm being a sissy.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040423101_04_030");
    MsgDisp("Nanatsumori","I see... it depends on how you look 
at it. Now that you mention it, you 
and I  both have naturally 
messy hair that looks great!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
