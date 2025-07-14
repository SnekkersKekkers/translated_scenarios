ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
MsgDisp("主人公","Yeah, what a nice smell!");
ChMotion(4,0,1);
ChMouthOpenLevel(4,0);
VoicePlay("D140B06000_04_000");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","Huh? ｛七ツ森＊｝, What's wrong?");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B06000_04_010");
MsgDisp("Nanatsumori","That's my line.
Are you okay with this?");
MsgDisp("主人公","Eh?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("D140B06000_03_010");
MsgDisp("Honda","Hm?");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D140B06000_04_020");
MsgDisp("Nanatsumori","Is it alright for you to leave Kazama
alone and have lunch with us?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D140B06000_03_020");
MsgDisp("Honda","Mii-kun, 
that's an obtrusive question.");
MsgDisp("主人公","?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("D140B06000_03_030");
MsgDisp("Honda","It's alright.
You two are lovey dovey childhood friends
after all!");
ChMouth(4,3);
MsgDisp("主人公","Hey...｛本多＊＊｝!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("D140B06000_03_040");
MsgDisp("Honda","There's no point in getting embarrassed
now.
That's nice, I'm so jealousー.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("D140B06000_04_030");
MsgDisp("Nanatsumori","...It's definitely none of our business.
Sorry.");
MsgDisp("主人公","(Everyone is worried about me and
｛風真＊＊｝...? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
ChClose(4,0,0);
