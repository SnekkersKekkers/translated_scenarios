BGOpen("fp430",0);
BGMPlay("BGM_PLACE_MUSEUM_MIHARA",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040110300_01_000");
MsgDisp("Kazama","The artist who spread his wings from
Habataki into the greater world.
His teenage works can only be seen here.");
MsgSel("Wasn't some of it donated to Haba High?","Both he and his works are beautiful","He seems like one of Vice Principal Himuro's students.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040110300_01_010");
    MsgDisp("Kazama","Yeah, I think it was drawn in art club.
This is way past the level of club
activities, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040110300_01_020");
    MsgDisp("Kazama","What do his looks have to do with it?
...Sheesh, women are always like this...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040110300_01_030");
    MsgDisp("Kazama","I immediately sense that too when I see
him. Maybe he came up to him and went,
\"Mihara, please join extracurricular
classes.\".");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
