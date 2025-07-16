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
    MsgDisp("主人公","(I have to carefully add this to the
materials management record...)");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    VoicePlay("P830500001_39_000");
    MsgDisp("Male Student","Excーuse me!
I would like some masking tape please!");
    MsgDisp("主人公","Yeーs!
Please enter your year, class and name,
then take the one on the shelf.");
    VoicePlay("P830500001_39_010");
    MsgDisp("Male Student","Understood!
Then, I'll take this.");
    MsgDisp("主人公","(Phew, this year I'm in charge of
materials.
I'm so busy, that I might get dizzy.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,4,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("P830500001_05_000");
    MsgDisp("Hiiragi","｛主人公｝, good work.
You seem busy.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
That's right, I wonder if there's even
enough materials...");
    ChMotion(5,0);
    VoicePlay("P830500001_05_010");
    MsgDisp("Hiiragi","Understood.
I'll make sure to make a note of that.");
    MsgDisp("主人公","Yeah, thank you!");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","(I have to carefully add this to the
materials management record...");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    VoicePlay("P830500001_39_020");
    MsgDisp("Male Student","Excuse meー!
I would like some masking tape and some
garbage bags!");
    MsgDisp("主人公","Yeーs!
Please take the ones on the shelf.");
    VoicePlay("P830500001_39_030");
    MsgDisp("Male Student","Huh?
But neither of them are there.");
    MsgDisp("主人公","Ehhh∋");
    SEPlay("EV_SE_DOOR_013");
    SEWait();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,4,0,4,#1,#1,0,0);
    VoicePlay("P830500001_05_020");
    MsgDisp("Hiiragi","Yes, here's the masking tape and garbage
bags.");
    VoicePlay("P830500001_39_040");
    MsgDisp("Male Student","Hiiragi, thank you!
I'm borrowing this!");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("P830500001_05_030");
    MsgDisp("Hiiragi","I was unsure of whether it was in our
inventory, so I purchased some.");
    MsgDisp("主人公","｛柊＊＊＊｝, thank you very
much!");
    MsgDisp("主人公","(Hmmm.... Even though the management
notebook said there should be some left.
We need to warn those who didn't fill it
in...)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
