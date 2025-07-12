BGMStop();
BGOpen("sc605",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","Please make an announcement 
for lost children every five minutes.");
    VoicePlay("P830500002_40_000");
    MsgDisp("Male Student","Ah, yes!");
    MsgDisp("主人公","Let's discuss the issue of the class
that was quarreling over the noise 
with a small group after this.");
    VoicePlay("P830500002_48_000");
    MsgDisp("School Girl","Yes please!");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P830500002_05_000");
    MsgDisp("Hiiragi","I have returned.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Welcome back!");
    ChMotion(5,4);
    VoiceEVSPlay(5);
    VoicePlay("P830500002_05_010");
    MsgDisp("Hiiragi","｛主人公｝,
your face looks stern?");
    MsgDisp("主人公","EH?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("P830500002_05_020");
    MsgDisp("Hiiragi","This is the last time we'll 
get to manage the school festival.
I want smile that's befitting of you.");
    MsgDisp("主人公","(I see, that's right...
I have to leave room to enjoy myself too!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","Please make an announcement 
for lost children every five minutes.");
    VoicePlay("P830500002_40_020");
    MsgDisp("Male Student","Ah, yes!");
    MsgDisp("主人公","How is the matter regarding the signboards
giving wrong information?");
    VoicePlay("P830500002_48_010");
    MsgDisp("School Girl","I don't know what's right 
and what's wrong...");
    MsgDisp("主人公","Then, remove them all, 
and leave out some information leaflets?");
    VoicePlay("P830500002_48_020");
    MsgDisp("School Girl","Understood.
I'm off!");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,4,3,3,#1,#1,0,0);
    VoicePlay("P830500002_05_030");
    MsgDisp("Hiiragi","Yeah, it really feels like the 
cultural festival is in full swing.");
    MsgDisp("主人公","｛柊＊＊＊｝, welcome back.
...phew.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P830500002_05_040");
    MsgDisp("Hiiragi","What's wrong, you seem as though
you're quickly becoming discouraged?");
    MsgDisp("主人公","Yeah...
I can't let our juniors
see me like this.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("P830500002_05_050");
    MsgDisp("Hiiragi","That's right. As expected of a veteran.
I'll take over for a while.
How about taking a bit of a break?");
    MsgDisp("主人公","I'm alright!
Thank you, ｛柊＊＊＊｝.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
