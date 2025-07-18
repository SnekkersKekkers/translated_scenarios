BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040121300_01_000");
MsgDisp("Kazama","Dogs and cats really are popular aren't
they");
MsgSel("Maybe it's because you can get close to them","｛風真＊＊｝, are you a dog person or cat person?","It's cute how they're sunbathing.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040121300_01_010");
    MsgDisp("Kazama","But would you come all the way here just
for the dogs and cats?
I don't get that.");
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
    VoicePlay("B040121300_01_020");
    MsgDisp("Kazama","That question assumes that I like either.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,2);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040121300_01_030");
    MsgDisp("Kazama","Yeah...kinda like how someone I know used
to nap in the sunlight by the classroom
window.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
