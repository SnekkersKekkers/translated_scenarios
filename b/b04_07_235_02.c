BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,1,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723502_07_000");
MsgDisp("Mikage","There were some minor changes, right?");
MsgSel("It's the same as always","It's scary...!","The person at the well has changed.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723502_07_010");
    MsgDisp("Mikage","I see... is it just me?
That's kinda scary.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040723502_07_020");
    MsgDisp("Mikage","Right!
If they're going to change it, they 
should make it easier to understand.
Subtle changes are scary.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(7,5);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040723502_07_030");
        MsgDisp("Mikage","Ehhh∋
You have a keen eye.
Aren't you too calm? ");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,5);
        ChMouth(7,2);
        ChMotion(7,5);
        VoicePlay("B040723502_07_040");
        MsgDisp("Mikage","Ehh? 
Do you also remember the staff
who played the ghosts?");
        MsgDisp("主人公","Yes, it's a prominent role.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040723502_07_050");
        MsgDisp("Mikage","Seriously...
Your observation skills are
the most scary thing.");
        MsgDisp("主人公","Hehe.
｛御影＊＊｝ is a timid person isn't he?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,3);
        ChEyeOpenLevel(7,7);
        VoicePlay("B040723502_07_060");
        MsgDisp("Mikage","Ah, you're tricking me again?");
        MsgDisp("主人公","No.
Because the usual ghosts are, look:
at the entrance, aren't they?");
        ChEye(7,5);
        ChMouth(7,1);
        ChMotion(7,5);
        VoicePlay("B040723502_07_070");
        MsgDisp("Mikage","Owaaah∋
You're right");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040723502_07_080");
        MsgDisp("Mikage","Stop it...～
There was a weird noise.
Let's go to the next one!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(7);
        MsgDisp("主人公","(｛御影＊＊｝ seems to be really enjoying
himself. I'm happy too.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    MsgClose();
    ScrFadeOut(0);
    ChOpen(7,255,7,0,0,-1,-1,0,0,0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
