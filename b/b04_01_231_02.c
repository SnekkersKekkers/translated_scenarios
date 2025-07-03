BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,4,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123102_01_000");
MsgDisp("Kazama","You were screaming a lot weren't you?");
MsgSel("It's kinda fun being at the back","It might be less scary if I make a lot of noise","Really? That's kinda embarrassing.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040123102_01_010");
    MsgDisp("Kazama","Apparently, there's more speed at the
back. You can't really see much either, so
there's probably a larger sense of dread.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,0,1);
        VoicePlay("B040123102_01_020");
        MsgDisp("Kazama","Don't push yourself 
if you're scared?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123102_01_030");
        MsgDisp("Kazama","That's fine but...
It doesn't feel good hearing 
you shriek so close to me.");
        MsgDisp("主人公","Eh?");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,8);
        ChCheek(1,5);
        VoicePlay("B040123102_01_040");
        MsgDisp("Kazama","I mean if you're going \"Kyaa-\", that means
you don't like it.");
        MsgDisp("主人公","Umm...
It's just a bit scary though.");
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        Wait(12,0);
        ChEye(1,4);
        ChMouth(1,2);
        ChCheek(1,0);
        VoicePlay("B040123102_01_050");
        MsgDisp("Kazama","Just how much is \"a bit\"
is important though. If you 
scream too much, you're banned.");
        MsgDisp("主人公","Hey,｛風真＊＊｝.
I'm gonna end up not being 
able to do anything?");
        ChMotion(1,2);
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,2);
        ChMouth(1,2);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123102_01_060");
        MsgDisp("Kazama","...Maybe that's true?");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123102_01_070");
        MsgDisp("Kazama","Then just change your scream to 
\"Waa--\", that should be fine.");
        MsgDisp("主人公","(That's difficult, ｛風真＊＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040123102_01_080");
    MsgDisp("Kazama","Isn't that good?
It just means you're also 
in top form today.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
