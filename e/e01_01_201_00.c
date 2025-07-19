BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","...Alright.
Time to head home.");
VoicePlay("E010120100_01_000");
MsgDisp("Kazama?","A select shop like ours doesn't have a lot
of stock, you see.");
VoicePlay("E010120100_05_000");
MsgDisp("Hiiragi?","I see.
Thank you.
I will look somewhere else.");
MsgDisp("主人公","These voices...");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("E010120100_05_010");
MsgDisp("Hiiragi","Ah, hello.");
MsgDisp("主人公","Hello, ｛柊＊＊＊｝.
Are you doing some shopping?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("E010120100_05_020");
MsgDisp("Hiiragi","Yes.
For souvenirs for the troupe.");
MsgDisp("主人公","Did you find anything good?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("E010120100_05_030");
MsgDisp("Hiiragi","Well-");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChEye(5,3);
ChMouth(5,2);
VoicePlay("E010120100_01_010");
MsgDisp("Kazama?","Wait a minute.");
ChPosition(5,1);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChOpen(1,35,0,0,2,#1,#1,0,2);
MsgDisp("主人公","｛風真＊＊｝!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("E010120100_01_020");
MsgDisp("Kazama","You, why are you──");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010120100_05_040");
MsgDisp("Hiiragi","We met here by chance.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("E010120100_01_030");
MsgDisp("Kazama","Yeah, I think I can get you 20 of those.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,3);
VoicePlay("E010120100_05_050");
MsgDisp("Hiiragi","Is that so?
Thank you.
You negotiated with the shopkeeper?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("E010120100_01_040");
MsgDisp("Kazama","I'm also a shopkeeper, so don't thank me.
I'll call you when it comes in.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("E010120100_05_060");
MsgDisp("Hiiragi","I'll be waiting. That's the charismatic
shopkeeper we've heard so much about,
isn't it? Well, I'll get going.");
ChMouth(1,0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
ChPosition(1,0);
Wait(60,0);
ChMotion(1,0);
MsgDisp("主人公","｛柊＊＊＊｝ looked pretty happy.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010120100_01_050");
MsgDisp("Kazama","Yeah, for the anniversary of the troupe,
they give gifts to parents and old
members.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010120100_01_060");
MsgDisp("Kazama","He asked me for something with a holly
pattern that didn't look too Christmas
themed.");
MsgDisp("主人公","You found the perfect thing!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("E010120100_01_070");
MsgDisp("Kazama","I didn't think I could get 20 units.
But I did it successfully!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010120100_01_080");
MsgDisp("Kazama","Ah, I gotta go too.
See you later then, Ms.
Apparition?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","Hehe.
｛柊＊＊＊｝ and ｛風真＊＊｝ both are
amazing...)");
MsgClose();
ScrFadeOut(0,0);
