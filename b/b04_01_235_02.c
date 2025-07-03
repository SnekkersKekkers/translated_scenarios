BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,0,8,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040123502_01_000");
MsgDisp("Kazama","Apparently these sorts of places 
attarct spirits don't they?");
MsgSel("There's a fleeing soldier behind ｛風真＊＊｝...","Then, they wouldn't need staff would they?","Eh, i-is that so...?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123502_01_010");
        MsgDisp("Kazama","Sure, sure.
Behind you is the spirit of a
gluttonous women...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,3);
        VoicePlay("B040123502_01_020");
        MsgDisp("Kazama","Is there not anyone else
but the fallen warrior?");
        MsgDisp("主人公","Umm, anyone else?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123502_01_030");
        MsgDisp("Kazama","Right.
Something that I would be
even more scared of.");
        MsgDisp("主人公","What are you scared of, ｛風真＊＊｝?");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123502_01_040");
        MsgDisp("Kazama","I won't tell you that easily.");
        MsgDisp("主人公","Eh, is there such a thing?
I thought ｛風真＊＊｝ could do 
anything,and didn't have anything 
he was scared of. ");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123502_01_050");
        MsgDisp("Kazama","That kinda makes me sound inhuman?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123502_01_060");
        MsgDisp("Kazama","It's not quite being scared, 
but even I have weaknesses.");
        MsgDisp("主人公","Is that so? Tell me.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040123502_01_070");
        MsgDisp("Kazama","Well, since you're super naive, 
I'll give you a special hint.");
        MsgClose();
        SEPlay("EV_SE_544");
        ChClose(1,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(1,255,7,0,3,8,-1,0,0,0,30);
        MsgDisp("主人公","｛風真＊＊｝, what's wrong?");
        ChEye(1,0);
        ChMouth(1,0);
        VoicePlay("B040123502_01_080");
        MsgDisp("Kazama","Look closely into my eyes.
What do you see?");
        MsgDisp("主人公","｛風真＊＊｝ 's eyes...
I can't see anythimg though.");
        ChEye(1,4);
        ChMouth(1,3);
        VoicePlay("B040123502_01_090");
        MsgDisp("Kazama","There's some fluffy thing 
peering into them, right?");
        MsgDisp("主人公","Eh?");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,4);
        ChCheek(1,7);
        VoicePlay("B040123502_01_100");
        MsgDisp("Kazama","That, is my weak point.");
        MsgDisp("主人公","(What does he mean?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("B040123502_01_110");
    MsgDisp("Kazama","For sure...
That's a great way of thinking about it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040123502_01_120");
    MsgDisp("Kazama","Yeah.
So it's not necessarily all fake.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
