ChLayout(1);
MsgClose();
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("G020340003_03_000");
MsgDisp("Honda","I'm finally satisfied with the ramen soup
I've been working on for so long.");
MsgDisp("主人公","Eh!
You made the soup from scratch......?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("G020340003_03_010");
MsgDisp("Honda","Right, right! he base is a chicken broth,
and then I adjust the flavor with soy
sauce or miso.");
ChMotion(3,4);
VoicePlay("G020340003_03_020");
MsgDisp("Honda","When I want something lighter, I mix in
vegetable or seafood broth, and when I
crave something rich, I add pork back fat.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("G020340003_03_030");
MsgDisp("Honda","Even when combining ingredients, the
flavor changes drastically based on the
ratio, so I went through a lot of trial
and error and collected a ton of data.");
MsgDisp("主人公","It's like you're a professional ramen
chef!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,2);
ChEyeOpenLevel(3,0);
VoicePlay("G020340003_03_040");
MsgDisp("Honda","I'm nowhere near a professionalー.
That's not modesty; it's just the truth.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("G020340003_03_050");
MsgDisp("Honda","it's just a hobby, so I don't have to
worry about costs.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G020340003_03_060");
MsgDisp("Honda","If I were this particular in a business
setting, I'd go bankrupt before opening.");
MsgDisp("主人公","(I'm kind of curious about this
profit-inefficient ramen......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
