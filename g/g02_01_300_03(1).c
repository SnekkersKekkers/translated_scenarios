MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020130003_01_000");
MsgDisp("Kazama","Actually seeing them this up close is
amazing...");
MsgDisp("主人公","Yeah, it's beautiful.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,0);
VoicePlay("G020130003_01_010");
MsgDisp("Kazama","By the way, didn't they talk about this
place too?");
MsgDisp("主人公","｛本多＊＊｝ and
｛七ツ森＊｝?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G020130003_01_020");
MsgDisp("Kazama","Yeah. But if we came with Honda, the
explanations would never stop. And you'd
add fuel to the fire with your perfect
questions.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("G020130003_01_030");
MsgDisp("Kazama","Nanatsumori would probably be busy with
his phone, taking pictures or something?
He's not the type to enjoy the scenery
much.");
MsgDisp("主人公","I think ｛七ツ森＊｝
would also enjoy it here.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020130003_01_040");
MsgDisp("Kazama","How do you know that?");
MsgDisp("主人公","Because they were both talking about this
place, right?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130003_01_050");
MsgDisp("Kazama","Well, yeah.
But it's only just us here no.");
MsgDisp("主人公","Next time shall we come with everyone?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020130003_01_060");
MsgDisp("Kazama","... No, next time let's come just the
two of us.
Without anyone finding out, okay?");
MsgDisp("主人公","It seems they'll find out sooner or
later....");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("G020130003_01_070");
MsgDisp("Kazama","Well, if they do, they'll drag the topic
on for a week... so keep quite about
it, okay?");
MsgDisp("主人公","(Hehe ｛風真＊＊｝, It seems you
really like ｛本多＊＊｝ and
｛七ツ森＊｝, huh?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
