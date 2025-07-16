BGOpen("fp430",0);
BGMPlay("BGM_PLACE_MUSEUM_MIHARA",0.01);
ChLayout(1);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040310300_03_000");
MsgDisp("Honda","Trichromatic... he's a great artist known
to everyone. I wonder what kind of student
he was when he was at Haba High?");
MsgSel("Wasn't he an odd person?","It's said he's been beautiful since a long time ago.","Apparently he had a peculiar way of talking");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B040310300_03_010");
    MsgDisp("Honda","Eh?
What do you mean by an odd person?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040310300_03_020");
    MsgDisp("Honda","Yep yep.
I just saw a recent picture of him, and he
was surrounded by roses!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040310300_03_030");
    MsgDisp("Honda","Yeah, I saw an interview video of his.
I was surprised that he called his Mom,
\"Mommy\" though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
