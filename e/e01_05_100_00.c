BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Well, I think it's time to go home.
...Huh?");
MsgDisp("主人公","｛柊＊＊＊｝!");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A");
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("E010510000_05_000");
MsgDisp("Hiiragi","Hello, ｛主人公｝.
Are you going shopping?");
MsgDisp("主人公","Yeah, but I'm about to go home now.
What about you, ｛柊＊＊＊｝?");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("E010510000_05_010");
MsgDisp("Hiiragi","We ran out of tea leaves for our guests so
I came to buy some, but it seems they
don't have any today.");
MsgDisp("主人公","None?
But the items at your feet are
｛柊＊＊＊｝'s , arent they?");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("E010510000_05_020");
MsgDisp("Hiiragi","Ah these...yes, they are.
I met some fans and supporters by chance.
They gave me many things.");
MsgDisp("主人公","They're gifts?");
ChEye(5,2);
ChMotion(5,0);
VoicePlay("E010510000_05_030");
MsgDisp("Hiiragi","Yes, so I can't give them to you.");
MsgDisp("主人公","Yeah, they aren't meant for me.
Oh, but maybe there's some tea in there?");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("E010510000_05_040");
MsgDisp("Hiiragi","No, there isn't any...
It seems things don't always go the way we
wish.");
ChEye(5,2);
ChMotion(5,0);
VoicePlay("E010510000_05_050");
MsgDisp("Hiiragi","That aside, I don't think I'll make it to
the tea shop.
Perhaps I'll give up for today.");
MsgDisp("主人公","Eh, why not?
I could accompany you if you'd like.");
ChMotion(5,2);
VoicePlay("E010510000_05_060");
MsgDisp("Hiiragi","That's no longer possible.
Information travels fast nowadays.");
MsgDisp("主人公","(Information...?)");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("E010510000_05_070");
MsgDisp("Hiiragi","See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
VoicePlay("E010510000_47_000");
MsgDisp("Woman","Oh my! The chairman really was here! Ah!
Here, these are for you!");
VoicePlay("E010510000_05_080");
MsgDisp("Hiiragi","Ah, I'm honored.
Thank you very much.");
MsgDisp("主人公","(I see, perhaps information of his
location was circulating?)");
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
