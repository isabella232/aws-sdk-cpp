﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API CreateApplicationRequest : public ServerlessApplicationRepositoryRequest
  {
  public:
    CreateApplicationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline CreateApplicationRequest& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline CreateApplicationRequest& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}

    /**
     * The name of the author publishing the app.\nMin Length=1. Max
     * Length=127.\nPattern "^[a-z0-9](([a-z0-9]|-(?!-))*[a-z0-9])?$";
     */
    inline CreateApplicationRequest& WithAuthor(const char* value) { SetAuthor(value); return *this;}


    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline CreateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline CreateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of the application.\nMin Length=1. Max Length=256
     */
    inline CreateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * Labels to improve discovery of apps in search results.\nMin Length=1. Max
     * Length=127. Maximum number of labels: 10\nPattern: "^[a-zA-Z0-9+\\-_:\\/@]+$";
     */
    inline CreateApplicationRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline const Aws::String& GetLicenseBody() const{ return m_licenseBody; }

    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline void SetLicenseBody(const Aws::String& value) { m_licenseBodyHasBeenSet = true; m_licenseBody = value; }

    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline void SetLicenseBody(Aws::String&& value) { m_licenseBodyHasBeenSet = true; m_licenseBody = std::move(value); }

    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline void SetLicenseBody(const char* value) { m_licenseBodyHasBeenSet = true; m_licenseBody.assign(value); }

    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithLicenseBody(const Aws::String& value) { SetLicenseBody(value); return *this;}

    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithLicenseBody(Aws::String&& value) { SetLicenseBody(std::move(value)); return *this;}

    /**
     * A raw text file that contains the license of the app that matches the
     * spdxLicenseID of your application.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithLicenseBody(const char* value) { SetLicenseBody(value); return *this;}


    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline const Aws::String& GetLicenseUrl() const{ return m_licenseUrl; }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline void SetLicenseUrl(const Aws::String& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = value; }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline void SetLicenseUrl(Aws::String&& value) { m_licenseUrlHasBeenSet = true; m_licenseUrl = std::move(value); }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline void SetLicenseUrl(const char* value) { m_licenseUrlHasBeenSet = true; m_licenseUrl.assign(value); }

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithLicenseUrl(const Aws::String& value) { SetLicenseUrl(value); return *this;}

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithLicenseUrl(Aws::String&& value) { SetLicenseUrl(std::move(value)); return *this;}

    /**
     * A link to a license file of the app that matches the spdxLicenseID of your
     * application.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithLicenseUrl(const char* value) { SetLicenseUrl(value); return *this;}


    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the application you want to publish.\nMin Length=1. Max
     * Length=140\nPattern: "[a-zA-Z0-9\\-]+";
     */
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline const Aws::String& GetReadmeBody() const{ return m_readmeBody; }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeBody(const Aws::String& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = value; }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeBody(Aws::String&& value) { m_readmeBodyHasBeenSet = true; m_readmeBody = std::move(value); }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeBody(const char* value) { m_readmeBodyHasBeenSet = true; m_readmeBody.assign(value); }

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithReadmeBody(const Aws::String& value) { SetReadmeBody(value); return *this;}

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithReadmeBody(Aws::String&& value) { SetReadmeBody(std::move(value)); return *this;}

    /**
     * A raw text Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithReadmeBody(const char* value) { SetReadmeBody(value); return *this;}


    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline const Aws::String& GetReadmeUrl() const{ return m_readmeUrl; }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(const Aws::String& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = value; }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(Aws::String&& value) { m_readmeUrlHasBeenSet = true; m_readmeUrl = std::move(value); }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline void SetReadmeUrl(const char* value) { m_readmeUrlHasBeenSet = true; m_readmeUrl.assign(value); }

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithReadmeUrl(const Aws::String& value) { SetReadmeUrl(value); return *this;}

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithReadmeUrl(Aws::String&& value) { SetReadmeUrl(std::move(value)); return *this;}

    /**
     * A link to the Readme file that contains a more detailed description of the
     * application and how it works in markdown language.\nMax size 5 MB
     */
    inline CreateApplicationRequest& WithReadmeUrl(const char* value) { SetReadmeUrl(value); return *this;}


    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateApplicationRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateApplicationRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline CreateApplicationRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * A link to a public repository for the source code of your application.
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = value; }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = std::move(value); }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl.assign(value); }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline CreateApplicationRequest& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * A link to a public repository for the source code of your application.
     */
    inline CreateApplicationRequest& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * A link to a public repository for the source code of your application.
     */
    inline CreateApplicationRequest& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline const Aws::String& GetSpdxLicenseId() const{ return m_spdxLicenseId; }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline void SetSpdxLicenseId(const Aws::String& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = value; }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline void SetSpdxLicenseId(Aws::String&& value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId = std::move(value); }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline void SetSpdxLicenseId(const char* value) { m_spdxLicenseIdHasBeenSet = true; m_spdxLicenseId.assign(value); }

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline CreateApplicationRequest& WithSpdxLicenseId(const Aws::String& value) { SetSpdxLicenseId(value); return *this;}

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline CreateApplicationRequest& WithSpdxLicenseId(Aws::String&& value) { SetSpdxLicenseId(std::move(value)); return *this;}

    /**
     * A valid identifier from https://spdx.org/licenses/ .
     */
    inline CreateApplicationRequest& WithSpdxLicenseId(const char* value) { SetSpdxLicenseId(value); return *this;}


    /**
     * The raw packaged SAM template of your application.
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * The raw packaged SAM template of your application.
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * The raw packaged SAM template of your application.
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * The raw packaged SAM template of your application.
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * The raw packaged SAM template of your application.
     */
    inline CreateApplicationRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * The raw packaged SAM template of your application.
     */
    inline CreateApplicationRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * The raw packaged SAM template of your application.
     */
    inline CreateApplicationRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * A link to the packaged SAM template of your application.
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrlHasBeenSet = true; m_templateUrl = value; }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::move(value); }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrlHasBeenSet = true; m_templateUrl.assign(value); }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline CreateApplicationRequest& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * A link to the packaged SAM template of your application.
     */
    inline CreateApplicationRequest& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * A link to the packaged SAM template of your application.
     */
    inline CreateApplicationRequest& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_author;
    bool m_authorHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet;

    Aws::String m_licenseBody;
    bool m_licenseBodyHasBeenSet;

    Aws::String m_licenseUrl;
    bool m_licenseUrlHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_readmeBody;
    bool m_readmeBodyHasBeenSet;

    Aws::String m_readmeUrl;
    bool m_readmeUrlHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet;

    Aws::String m_spdxLicenseId;
    bool m_spdxLicenseIdHasBeenSet;

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
