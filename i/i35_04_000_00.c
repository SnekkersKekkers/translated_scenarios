BGOpen("ar100",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I350400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,4,1);
    VoicePlay("I350400000_04_010");
    MsgDisp("Nanatsumori","Aah...Shh∈ You're. Too. Loud.");
    MsgDisp("主人公","Ah...
I'm sorry.");
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I350400000_04_020");
    MsgDisp("Nanatsumori","Is my usual seat open?");
    MsgDisp("主人公","Yes!
For you, sir, I polished it until it
sparkled.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I350400000_04_030");
    MsgDisp("Nanatsumori","Sparkle...
Thanks for that.
Then, could I get a menu?");
    MsgDisp("主人公","(He seemed happy, I guess?)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I350400000_04_040");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Welcome!
Thank you for coming!");
    ChMotion(4,1,1);
    VoicePlay("I350400000_04_050");
    MsgDisp("Nanatsumori","Yeah.
But, I gotta go soon.
I just came to say hi.");
    MsgDisp("主人公","Oh, is that so?");
    ChMotion(4,0,1);
    VoicePlay("I350400000_04_060");
    MsgDisp("Nanatsumori","Yeah. I have a shoot at the studio next
door after this. I'll come by after work.");
    MsgDisp("主人公","I see.
Then, I'll make sure your usual seat is
shiny and clean!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I350400000_04_070");
    MsgDisp("Nanatsumori","Looking forward to it.
Work hard until then.
Well, see you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(Did ｛七ツ森＊｝ come to support
me...?)");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I350400000_04_080");
    MsgDisp("Nanatsumori","Yo, hello.");
    MsgDisp("主人公","Ah...
Welcome!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("I350400000_04_090");
    MsgDisp("Nanatsumori","Hm～......");
    MsgDisp("主人公","Hm?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I350400000_04_100");
    MsgDisp("Nanatsumori","All the tension kinda drained from my body
when I saw your face.");
    MsgDisp("主人公","Huh...");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I350400000_04_110");
    MsgDisp("Nanatsumori","Nah, not in a bad way.
Healed?
That kinda good feeling.");
    MsgDisp("主人公","Really?");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I350400000_04_120");
    MsgDisp("Nanatsumori","Really.
I'll have a cup of coffee to wake me up
before I embarrass myself any more.");
    MsgDisp("主人公","Hehe, got it!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I350400000_04_130");
    MsgDisp("Nanatsumori","Heheh...
More energy than healing, huh.");
    MsgDisp("主人公","(｛七ツ森＊｝ looks like he's having fun.
I think I'm feeling better, too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
