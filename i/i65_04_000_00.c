BGOpen("ar300",0);
ChLayout(1);
ChNanaType(0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I650400000_04_000");
    MsgDisp("Nanatsumori","Ah.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("I650400000_04_010");
    MsgDisp("Nanatsumori","Nah, I have nothing to do here...");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I650400000_04_020");
    MsgDisp("Nanatsumori","I just headed this way 'cuz I saw you.
Well, good luck with work.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4,0,30);
    MsgDisp("主人公","(I guess that's it...
But, he came to check on me, right?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I650400000_04_030");
    MsgDisp("Nanatsumori","Yo, good work.");
    MsgDisp("主人公","｛七ツ森＊｝!
Are you about to go on a trip?");
    ChMotion(4,1,1);
    VoicePlay("I650400000_04_040");
    MsgDisp("Nanatsumori","Nah, I'm heading to a work site.
Taking some pictures in the night view.");
    MsgDisp("主人公","I see. So there are shoots that take place
late at night, too. Careful on your way
home, okay?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I650400000_04_050");
    MsgDisp("Nanatsumori","You too. I can't walk you home, but I'll
cheer you on. Do your best.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4,0,30);
    MsgDisp("主人公","(Hehe, ｛七ツ森＊｝
cheered me on.
Let's do our best until we go home!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0);
    VoicePlay("I650400000_04_060");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
What's up?");
    VoicePlay("I650400000_04_070");
    MsgDisp("Nanatsumori","A delivery.");
    MsgDisp("主人公","Hm, of what?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I650400000_04_080");
    MsgDisp("Nanatsumori","Super nice-smelling hand cream. You must
always be washing oil and dirt off your
hands. Care for them with this.");
    MsgDisp("主人公","Yeah.
Waah, it really does smell good...!
Thanks!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I650400000_04_090");
    MsgDisp("Nanatsumori","You're welcome.
You don't get off until... how long?");
    MsgDisp("主人公","Hm?
Um, not for another hour...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I650400000_04_100");
    MsgDisp("Nanatsumori","Guess so.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("I650400000_04_110");
    MsgDisp("Nanatsumori","I wish I had a real car for times like
this, so I could wait for you...");
    MsgDisp("主人公","(｛七ツ森＊｝?
He came to cheer me on, right?
I'm so happy he gave me hand cream!)");
    BGMStop();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
