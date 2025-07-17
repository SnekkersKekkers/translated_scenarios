BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_652");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Welcome!
Ah, ｛颯砂＊＊｝.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    MsgClose();
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("I150200000_02_000");
    MsgDisp("Sassa","Wow, that apron's nice.");
    MsgDisp("主人公","Hehe, thanks.
Are you shopping, ｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("I150200000_02_010");
    MsgDisp("Sassa","Nah, I saw you from outside, so I wandered
in.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("I150200000_02_020");
    MsgDisp("Sassa","Maybe I'm a little out of place here?");
    MsgDisp("主人公","No, not at all.
Ah, ｛風真＊＊｝'s in the back.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("I150200000_02_030");
    MsgDisp("Sassa","So, Ryota's here too...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I150200000_02_040");
    MsgDisp("Sassa","Heheh. That guy's in a good mood at school
when he has a shift afterwards, so I bet
he's working with a grin, right?");
    MsgDisp("主人公","Should I call him over?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I150200000_02_050");
    MsgDisp("Sassa","It's fine.
I feel like I'd laugh if I saw his face.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("I150200000_02_060");
    MsgDisp("Sassa","See you later, work hard.
Say hi to Ryota for me, too.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Boys' relationships are interesting...
I hope ｛颯砂＊＊｝ will come
back.)");
    break ;
    case 3:
    MsgDisp("主人公","Welcome!
Ah, ｛颯砂＊＊｝.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    MsgClose();
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("I150200000_02_070");
    MsgDisp("Sassa","I came to visit while you're working.
Looks like you're working hard.");
    MsgDisp("主人公","Yeah.
Thanks.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I150200000_02_080");
    MsgDisp("Sassa","Actually, I'd like to be more comfortable
coming here, but it's a high hurdle for
me.");
    MsgDisp("主人公","That's not true, you know?
We have things for men, too-");
    SEPlay("EV_SE_FOOT_WALK_COME_TWO");
    SEWait();
    VoicePlay("I150200000_47_000");
    MsgDisp("Woman Customer A","Wah, this is it!
The new product that came out.");
    VoicePlay("I150200000_48_000");
    MsgDisp("Woman Customer B","It's true, so cute～!");
    MsgDisp("主人公","Ah, welcome!");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("I150200000_02_090");
    MsgDisp("Sassa","...See, I'm out of place.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I150200000_02_100");
    MsgDisp("Sassa","I'm going home.
See you, work hard at your job.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝, he said the hurdle was high,
but he still came to support me...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Welcome!
Ah, ｛颯砂＊＊｝.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,0);
    VoicePlay("I150200000_02_110");
    MsgDisp("Sassa","What a nice clerk.
Try treating me like you would a customer.");
    MsgDisp("主人公","Sure.
What are you looking for today, sir?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I150200000_02_120");
    MsgDisp("Sassa","Hm, I'll take this store's most valuable
item!");
    MsgDisp("主人公","Ahaha, no customer acts like that.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("I150200000_02_130");
    MsgDisp("Sassa","Hm?
No good?
Aren't some rich people like that?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I150200000_02_140");
    MsgDisp("Sassa","But, you know, I don't even have to look
for the most valuable thing in this store.");
    MsgDisp("主人公","Huh, you know what it is?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I150200000_02_150");
    MsgDisp("Sassa","See, it's right in front of me.");
    MsgDisp("主人公","Huh?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("I150200000_02_160");
    MsgDisp("Sassa","It doesn't look like it's for sale, so
I'll be back to admire it.
See you.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    SEWait();
    MsgDisp("主人公","(The store's most valuable thing... is
me!?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
