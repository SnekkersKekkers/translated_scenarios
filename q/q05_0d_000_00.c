ChLayout(1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(21,254,7,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,3,1);
VoicePlay("Q050D00000_22_000");
MsgDisp("Hikaru","Bonjour, Mari♪");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("Q050D00000_21_000");
MsgDisp("Michiru","Good morning.
Did you sleep well?");
MsgDisp("主人公","｛ひかる＊｝,
｛みちる＊｝, good
morning! Yep, absolutely.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q050D00000_22_010");
MsgDisp("Hikaru","So hey, for today's free period, wanna
come with us?");
MsgSel("Yeah, sure！","Eeh...... sorry");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("Q050D00000_22_020");
    MsgDisp("Hikaru","Yey▼");
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("Q050D00000_21_010");
    MsgDisp("Michiru","Let's make lot of memories together.");
    MsgDisp("主人公","(Together with
｛ひかる＊｝ and
｛みちる＊｝, this is
gonna be fun!)");
    break ;
    case 1:
    ChEye(22,2);
    ChMouth(22,1);
    ChMotion(22,3,1);
    VoicePlay("Q050D00000_22_030");
    MsgDisp("Hikaru","Eh∋
How come, why?");
    ChEye(21,0);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("Q050D00000_21_020");
    MsgDisp("Michiru","...... Hikaru.
Maria surely has her own plans.
Let's go.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    ChClose(21,0,30);
    ChClose(22,0,30);
    MsgDisp("主人公","(Mm......
Now I feel bad, maybe I should'nt have
refused?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
