MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛本多＊＊｝, good morning!");
    ChMotion(3,1,1);
    VoicePlay("Q040300000_03_000");
    MsgDisp("Honda","Good morning.");
    MsgDisp("主人公","｛本多＊＊｝, have you already decided on
who you want to go with for today's free
time?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("Q040300000_03_010");
    MsgDisp("Honda","I see.
Because it's the free period, we're also
free to decide on who we go with.");
    MsgDisp("主人公","Mhm. If you're fine with it, why don't we
go around together?");
    break ;
    case 3:
    MsgDisp("主人公","｛本多＊＊｝, so you're here.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("Q040300000_03_020");
    MsgDisp("Honda","｛主人公｝, good morning!
Did you need something?");
    MsgDisp("主人公","Yeah, good morning! ｛本多＊＊｝, I was
wondering if you have anything planned for
the free period, is all.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("Q040300000_03_030");
    MsgDisp("Honda","I have a lot of places I wanted to go and
see, so I was sequencing the order of the
places in my head.");
    MsgDisp("主人公","I see.
If you're fine with it, wanna look around
together with me?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛本多＊＊｝, good morning!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoiceEVSPlay(3);
    VoicePlay("Q040300000_03_040");
    MsgDisp("Honda","｛主人公｝, 'morning!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("Q040300000_03_050");
    MsgDisp("Honda","'Getting greeted with 'good morning' by
you outside of school is pretty
refreshing!");
    MsgDisp("主人公","Yeah, I guess so?
We're in a hotel lobby after all.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("Q040300000_03_060");
    MsgDisp("Honda","Exactly. Doesn't it feel like the two of
us went on a leisure trip?");
    MsgDisp("主人公","Hehe, it's a weird feeling, isn't it?
...Oh, right! If you're fine with it, I
was thinking we could go around together
for the free time period.");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("Q040300000_03_070");
    MsgDisp("Honda","Aww, that's what I was going to say!");
    MsgDisp("主人公","Eh?
so that means......");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
